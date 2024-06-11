﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterGroupNameMessage">AWS
   * API Reference</a></p>
   */
  class ModifyClusterParameterGroupResult
  {
  public:
    AWS_REDSHIFT_API ModifyClusterParameterGroupResult();
    AWS_REDSHIFT_API ModifyClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupName.assign(value); }
    inline ModifyClusterParameterGroupResult& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline ModifyClusterParameterGroupResult& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline ModifyClusterParameterGroupResult& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatus = value; }
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatus = std::move(value); }
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatus.assign(value); }
    inline ModifyClusterParameterGroupResult& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}
    inline ModifyClusterParameterGroupResult& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(std::move(value)); return *this;}
    inline ModifyClusterParameterGroupResult& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterGroupName;

    Aws::String m_parameterGroupStatus;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
