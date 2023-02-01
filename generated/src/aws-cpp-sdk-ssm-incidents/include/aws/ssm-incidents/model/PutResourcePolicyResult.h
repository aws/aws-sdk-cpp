/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_SSMINCIDENTS_API PutResourcePolicyResult();
    AWS_SSMINCIDENTS_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyId = value; }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyId = std::move(value); }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyId.assign(value); }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

  private:

    Aws::String m_policyId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
