/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
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
namespace SsmSap
{
namespace Model
{
  class PutResourcePermissionResult
  {
  public:
    AWS_SSMSAP_API PutResourcePermissionResult();
    AWS_SSMSAP_API PutResourcePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API PutResourcePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p/>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p/>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p/>
     */
    inline PutResourcePermissionResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p/>
     */
    inline PutResourcePermissionResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PutResourcePermissionResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
