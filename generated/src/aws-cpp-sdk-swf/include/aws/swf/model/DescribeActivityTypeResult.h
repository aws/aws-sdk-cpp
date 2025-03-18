/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityTypeInfo.h>
#include <aws/swf/model/ActivityTypeConfiguration.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Detailed information about an activity type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeDetail">AWS
   * API Reference</a></p>
   */
  class DescribeActivityTypeResult
  {
  public:
    AWS_SWF_API DescribeActivityTypeResult() = default;
    AWS_SWF_API DescribeActivityTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeActivityTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline const ActivityTypeInfo& GetTypeInfo() const { return m_typeInfo; }
    template<typename TypeInfoT = ActivityTypeInfo>
    void SetTypeInfo(TypeInfoT&& value) { m_typeInfoHasBeenSet = true; m_typeInfo = std::forward<TypeInfoT>(value); }
    template<typename TypeInfoT = ActivityTypeInfo>
    DescribeActivityTypeResult& WithTypeInfo(TypeInfoT&& value) { SetTypeInfo(std::forward<TypeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline const ActivityTypeConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = ActivityTypeConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ActivityTypeConfiguration>
    DescribeActivityTypeResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActivityTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ActivityTypeInfo m_typeInfo;
    bool m_typeInfoHasBeenSet = false;

    ActivityTypeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
