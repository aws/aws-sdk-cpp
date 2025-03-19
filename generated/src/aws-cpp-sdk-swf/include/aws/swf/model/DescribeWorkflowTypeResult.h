/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowTypeInfo.h>
#include <aws/swf/model/WorkflowTypeConfiguration.h>
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
   * <p>Contains details about a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeDetail">AWS
   * API Reference</a></p>
   */
  class DescribeWorkflowTypeResult
  {
  public:
    AWS_SWF_API DescribeWorkflowTypeResult() = default;
    AWS_SWF_API DescribeWorkflowTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeWorkflowTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline const WorkflowTypeInfo& GetTypeInfo() const { return m_typeInfo; }
    template<typename TypeInfoT = WorkflowTypeInfo>
    void SetTypeInfo(TypeInfoT&& value) { m_typeInfoHasBeenSet = true; m_typeInfo = std::forward<TypeInfoT>(value); }
    template<typename TypeInfoT = WorkflowTypeInfo>
    DescribeWorkflowTypeResult& WithTypeInfo(TypeInfoT&& value) { SetTypeInfo(std::forward<TypeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline const WorkflowTypeConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = WorkflowTypeConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = WorkflowTypeConfiguration>
    DescribeWorkflowTypeResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkflowTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkflowTypeInfo m_typeInfo;
    bool m_typeInfoHasBeenSet = false;

    WorkflowTypeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
