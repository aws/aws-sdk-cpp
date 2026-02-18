#pragma once

namespace Aws {
namespace S3Crt {
template <typename ClientType>
class S3CrtPaginationBase {
 public:
  virtual ~S3CrtPaginationBase() = default;
};
}  // namespace S3Crt
}  // namespace Aws
