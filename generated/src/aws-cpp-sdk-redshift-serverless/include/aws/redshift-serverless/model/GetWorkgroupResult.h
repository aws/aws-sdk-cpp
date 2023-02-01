/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Workgroup.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetWorkgroupResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetWorkgroupResult();
    AWS_REDSHIFTSERVERLESS_API GetWorkgroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetWorkgroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned workgroup object.</p>
     */
    inline const Workgroup& GetWorkgroup() const{ return m_workgroup; }

    /**
     * <p>The returned workgroup object.</p>
     */
    inline void SetWorkgroup(const Workgroup& value) { m_workgroup = value; }

    /**
     * <p>The returned workgroup object.</p>
     */
    inline void SetWorkgroup(Workgroup&& value) { m_workgroup = std::move(value); }

    /**
     * <p>The returned workgroup object.</p>
     */
    inline GetWorkgroupResult& WithWorkgroup(const Workgroup& value) { SetWorkgroup(value); return *this;}

    /**
     * <p>The returned workgroup object.</p>
     */
    inline GetWorkgroupResult& WithWorkgroup(Workgroup&& value) { SetWorkgroup(std::move(value)); return *this;}

  private:

    Workgroup m_workgroup;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
