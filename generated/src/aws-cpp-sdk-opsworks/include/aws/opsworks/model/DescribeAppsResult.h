/**
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
    AWS_OPSWORKS_API DescribeAppsResult() = default;
    AWS_OPSWORKS_API DescribeAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const { return m_apps; }
    template<typename AppsT = Aws::Vector<App>>
    void SetApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps = std::forward<AppsT>(value); }
    template<typename AppsT = Aws::Vector<App>>
    DescribeAppsResult& WithApps(AppsT&& value) { SetApps(std::forward<AppsT>(value)); return *this;}
    template<typename AppsT = App>
    DescribeAppsResult& AddApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps.emplace_back(std::forward<AppsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<App> m_apps;
    bool m_appsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
