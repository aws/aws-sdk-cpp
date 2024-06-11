﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Principal.h>
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
namespace WorkDocs
{
namespace Model
{
  class DescribeResourcePermissionsResult
  {
  public:
    AWS_WORKDOCS_API DescribeResourcePermissionsResult();
    AWS_WORKDOCS_API DescribeResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The principals.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipals() const{ return m_principals; }
    inline void SetPrincipals(const Aws::Vector<Principal>& value) { m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Principal>&& value) { m_principals = std::move(value); }
    inline DescribeResourcePermissionsResult& WithPrincipals(const Aws::Vector<Principal>& value) { SetPrincipals(value); return *this;}
    inline DescribeResourcePermissionsResult& WithPrincipals(Aws::Vector<Principal>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline DescribeResourcePermissionsResult& AddPrincipals(const Principal& value) { m_principals.push_back(value); return *this; }
    inline DescribeResourcePermissionsResult& AddPrincipals(Principal&& value) { m_principals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeResourcePermissionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeResourcePermissionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeResourcePermissionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeResourcePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeResourcePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeResourcePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Principal> m_principals;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
