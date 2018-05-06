// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CRYPTOGETPWTYPE_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_CRYPTOGETPWTYPE_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct CryptoGetPwTypeRequest;

struct CryptoGetPwTypeResponse;

enum CryptoPwType {
  CryptoPwType_DEFAULT = 0,
  CryptoPwType_PASSWORD = 1,
  CryptoPwType_PATTERN = 2,
  CryptoPwType_PIN = 3,
  CryptoPwType_UNKNOWN = 4,
  CryptoPwType_MIN = CryptoPwType_DEFAULT,
  CryptoPwType_MAX = CryptoPwType_UNKNOWN
};

inline const char **EnumNamesCryptoPwType() {
  static const char *names[] = {
    "DEFAULT",
    "PASSWORD",
    "PATTERN",
    "PIN",
    "UNKNOWN",
    nullptr
  };
  return names;
}

inline const char *EnumNameCryptoPwType(CryptoPwType e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesCryptoPwType()[index];
}

struct CryptoGetPwTypeRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct CryptoGetPwTypeRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  CryptoGetPwTypeRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CryptoGetPwTypeRequestBuilder &operator=(const CryptoGetPwTypeRequestBuilder &);
  flatbuffers::Offset<CryptoGetPwTypeRequest> Finish() {
    const auto end = fbb_.EndTable(start_, 0);
    auto o = flatbuffers::Offset<CryptoGetPwTypeRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<CryptoGetPwTypeRequest> CreateCryptoGetPwTypeRequest(
    flatbuffers::FlatBufferBuilder &_fbb) {
  CryptoGetPwTypeRequestBuilder builder_(_fbb);
  return builder_.Finish();
}

struct CryptoGetPwTypeResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {

  };
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct CryptoGetPwTypeResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  CryptoGetPwTypeResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CryptoGetPwTypeResponseBuilder &operator=(const CryptoGetPwTypeResponseBuilder &);
  flatbuffers::Offset<CryptoGetPwTypeResponse> Finish() {
    const auto end = fbb_.EndTable(start_, 1);
    auto o = flatbuffers::Offset<CryptoGetPwTypeResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<CryptoGetPwTypeResponse> CreateCryptoGetPwTypeResponse(
    flatbuffers::FlatBufferBuilder &_fbb) {
  CryptoGetPwTypeResponseBuilder builder_(_fbb);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_CRYPTOGETPWTYPE_MBTOOL_DAEMON_V3_H_