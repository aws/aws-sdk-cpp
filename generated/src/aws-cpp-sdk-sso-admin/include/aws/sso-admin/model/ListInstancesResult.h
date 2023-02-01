/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceMetadata.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_SSOADMIN_API ListInstancesResult();
    AWS_SSOADMIN_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline const Aws::Vector<InstanceMetadata>& GetInstances() const{ return m_instances; }

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline void SetInstances(const Aws::Vector<InstanceMetadata>& value) { m_instances = value; }

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline void SetInstances(Aws::Vector<InstanceMetadata>&& value) { m_instances = std::move(value); }

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline ListInstancesResult& WithInstances(const Aws::Vector<InstanceMetadata>& value) { SetInstances(value); return *this;}

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline ListInstancesResult& WithInstances(Aws::Vector<InstanceMetadata>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline ListInstancesResult& AddInstances(const InstanceMetadata& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Lists the IAM Identity Center instances that the caller has access to.</p>
     */
    inline ListInstancesResult& AddInstances(InstanceMetadata&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceMetadata> m_instances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
