﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/App.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeApps</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAppsResult">AWS
   * API Reference</a></p>
   */
  class DescribeAppsResult
  {
  public:
    AWS_OPSWORKS_API DescribeAppsResult();
    AWS_OPSWORKS_API DescribeAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const{ return m_apps; }
    inline void SetApps(const Aws::Vector<App>& value) { m_apps = value; }
    inline void SetApps(Aws::Vector<App>&& value) { m_apps = std::move(value); }
    inline DescribeAppsResult& WithApps(const Aws::Vector<App>& value) { SetApps(value); return *this;}
    inline DescribeAppsResult& WithApps(Aws::Vector<App>&& value) { SetApps(std::move(value)); return *this;}
    inline DescribeAppsResult& AddApps(const App& value) { m_apps.push_back(value); return *this; }
    inline DescribeAppsResult& AddApps(App&& value) { m_apps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<App> m_apps;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
