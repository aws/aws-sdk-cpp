/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{
  class AddProfilePermissionResult
  {
  public:
    AWS_SIGNER_API AddProfilePermissionResult();
    AWS_SIGNER_API AddProfilePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API AddProfilePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
