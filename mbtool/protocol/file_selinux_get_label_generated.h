// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILESELINUXGETLABEL_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_FILESELINUXGETLABEL_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct FileSELinuxGetLabelError;

struct FileSELinuxGetLabelRequest;

struct FileSELinuxGetLabelResponse;

struct FileSELinuxGetLabelError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const {
    return GetField<int32_t>(VT_ERRNO_VALUE, 0);
  }
  const flatbuffers::String *msg() const {
    return GetPointer<const flatbuffers::String *>(VT_MSG);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct FileSELinuxGetLabelErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) {
    fbb_.AddElement<int32_t>(FileSELinuxGetLabelError::VT_ERRNO_VALUE, errno_value, 0);
  }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) {
    fbb_.AddOffset(FileSELinuxGetLabelError::VT_MSG, msg);
  }
  FileSELinuxGetLabelErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileSELinuxGetLabelErrorBuilder &operator=(const FileSELinuxGetLabelErrorBuilder &);
  flatbuffers::Offset<FileSELinuxGetLabelError> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<FileSELinuxGetLabelError>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileSELinuxGetLabelError> CreateFileSELinuxGetLabelError(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  FileSELinuxGetLabelErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileSELinuxGetLabelError> CreateFileSELinuxGetLabelErrorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return mbtool::daemon::v3::CreateFileSELinuxGetLabelError(
      _fbb,
      errno_value,
      msg ? _fbb.CreateString(msg) : 0);
}

struct FileSELinuxGetLabelRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct FileSELinuxGetLabelRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FileSELinuxGetLabelRequest::VT_ID, id, 0);
  }
  FileSELinuxGetLabelRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileSELinuxGetLabelRequestBuilder &operator=(const FileSELinuxGetLabelRequestBuilder &);
  flatbuffers::Offset<FileSELinuxGetLabelRequest> Finish() {
    const auto end = fbb_.EndTable(start_, 1);
    auto o = flatbuffers::Offset<FileSELinuxGetLabelRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileSELinuxGetLabelRequest> CreateFileSELinuxGetLabelRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0) {
  FileSELinuxGetLabelRequestBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

struct FileSELinuxGetLabelResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_LABEL = 8,
    VT_ERROR = 10
  };
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const flatbuffers::String *error_msg() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG);
  }
  const flatbuffers::String *label() const {
    return GetPointer<const flatbuffers::String *>(VT_LABEL);
  }
  const FileSELinuxGetLabelError *error() const {
    return GetPointer<const FileSELinuxGetLabelError *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_LABEL) &&
           verifier.Verify(label()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct FileSELinuxGetLabelResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(FileSELinuxGetLabelResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) {
    fbb_.AddOffset(FileSELinuxGetLabelResponse::VT_ERROR_MSG, error_msg);
  }
  void add_label(flatbuffers::Offset<flatbuffers::String> label) {
    fbb_.AddOffset(FileSELinuxGetLabelResponse::VT_LABEL, label);
  }
  void add_error(flatbuffers::Offset<FileSELinuxGetLabelError> error) {
    fbb_.AddOffset(FileSELinuxGetLabelResponse::VT_ERROR, error);
  }
  FileSELinuxGetLabelResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileSELinuxGetLabelResponseBuilder &operator=(const FileSELinuxGetLabelResponseBuilder &);
  flatbuffers::Offset<FileSELinuxGetLabelResponse> Finish() {
    const auto end = fbb_.EndTable(start_, 4);
    auto o = flatbuffers::Offset<FileSELinuxGetLabelResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileSELinuxGetLabelResponse> CreateFileSELinuxGetLabelResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    flatbuffers::Offset<flatbuffers::String> label = 0,
    flatbuffers::Offset<FileSELinuxGetLabelError> error = 0) {
  FileSELinuxGetLabelResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_label(label);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileSELinuxGetLabelResponse> CreateFileSELinuxGetLabelResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    const char *label = nullptr,
    flatbuffers::Offset<FileSELinuxGetLabelError> error = 0) {
  return mbtool::daemon::v3::CreateFileSELinuxGetLabelResponse(
      _fbb,
      success,
      error_msg ? _fbb.CreateString(error_msg) : 0,
      label ? _fbb.CreateString(label) : 0,
      error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_FILESELINUXGETLABEL_MBTOOL_DAEMON_V3_H_