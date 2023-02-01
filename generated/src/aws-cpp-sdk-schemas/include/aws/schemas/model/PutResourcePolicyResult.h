/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
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
namespace Schemas
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_SCHEMAS_API PutResourcePolicyResult();
    AWS_SCHEMAS_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource-based policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The resource-based policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource-based policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource-based policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The revision ID of the policy.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline PutResourcePolicyResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline PutResourcePolicyResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the policy.</p>
     */
    inline PutResourcePolicyResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_policy;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
