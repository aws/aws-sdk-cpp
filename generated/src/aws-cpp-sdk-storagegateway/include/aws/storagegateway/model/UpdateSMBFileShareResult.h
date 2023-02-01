/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>UpdateSMBFileShareOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSMBFileShareOutput">AWS
   * API Reference</a></p>
   */
  class UpdateSMBFileShareResult
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateSMBFileShareResult();
    AWS_STORAGEGATEWAY_API UpdateSMBFileShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateSMBFileShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline void SetFileShareARN(const char* value) { m_fileShareARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline UpdateSMBFileShareResult& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline UpdateSMBFileShareResult& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated SMB file share.</p>
     */
    inline UpdateSMBFileShareResult& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}

  private:

    Aws::String m_fileShareARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
