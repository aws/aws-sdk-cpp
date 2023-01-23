/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Identity policies associated with email identity.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class GetEmailIdentityPoliciesResult
  {
  public:
    AWS_SESV2_API GetEmailIdentityPoliciesResult();
    AWS_SESV2_API GetEmailIdentityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetEmailIdentityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of policy names to policies.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPolicies() const{ return m_policies; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline void SetPolicies(const Aws::Map<Aws::String, Aws::String>& value) { m_policies = value; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline void SetPolicies(Aws::Map<Aws::String, Aws::String>&& value) { m_policies = std::move(value); }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& WithPolicies(const Aws::Map<Aws::String, Aws::String>& value) { SetPolicies(value); return *this;}

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& WithPolicies(Aws::Map<Aws::String, Aws::String>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(const Aws::String& key, const Aws::String& value) { m_policies.emplace(key, value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(Aws::String&& key, const Aws::String& value) { m_policies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(const Aws::String& key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(Aws::String&& key, Aws::String&& value) { m_policies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(const char* key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(Aws::String&& key, const char* value) { m_policies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetEmailIdentityPoliciesResult& AddPolicies(const char* key, const char* value) { m_policies.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_policies;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
