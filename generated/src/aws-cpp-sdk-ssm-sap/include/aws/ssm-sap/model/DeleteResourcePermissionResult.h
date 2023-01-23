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
  class DeleteResourcePermissionResult
  {
  public:
    AWS_SSMSAP_API DeleteResourcePermissionResult();
    AWS_SSMSAP_API DeleteResourcePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API DeleteResourcePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteResourcePermissionResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
