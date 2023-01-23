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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Detailed information on file system association status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileSystemAssociationStatusDetail">AWS
   * API Reference</a></p>
   */
  class FileSystemAssociationStatusDetail
  {
  public:
    AWS_STORAGEGATEWAY_API FileSystemAssociationStatusDetail();
    AWS_STORAGEGATEWAY_API FileSystemAssociationStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API FileSystemAssociationStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline FileSystemAssociationStatusDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline FileSystemAssociationStatusDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code for a given file system association status.</p>
     */
    inline FileSystemAssociationStatusDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
