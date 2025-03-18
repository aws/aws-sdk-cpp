/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/OptionGroup.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>List of option groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroups">AWS
   * API Reference</a></p>
   */
  class DescribeOptionGroupsResult
  {
  public:
    AWS_RDS_API DescribeOptionGroupsResult() = default;
    AWS_RDS_API DescribeOptionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeOptionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of option groups.</p>
     */
    inline const Aws::Vector<OptionGroup>& GetOptionGroupsList() const { return m_optionGroupsList; }
    template<typename OptionGroupsListT = Aws::Vector<OptionGroup>>
    void SetOptionGroupsList(OptionGroupsListT&& value) { m_optionGroupsListHasBeenSet = true; m_optionGroupsList = std::forward<OptionGroupsListT>(value); }
    template<typename OptionGroupsListT = Aws::Vector<OptionGroup>>
    DescribeOptionGroupsResult& WithOptionGroupsList(OptionGroupsListT&& value) { SetOptionGroupsList(std::forward<OptionGroupsListT>(value)); return *this;}
    template<typename OptionGroupsListT = OptionGroup>
    DescribeOptionGroupsResult& AddOptionGroupsList(OptionGroupsListT&& value) { m_optionGroupsListHasBeenSet = true; m_optionGroupsList.emplace_back(std::forward<OptionGroupsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeOptionGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeOptionGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptionGroup> m_optionGroupsList;
    bool m_optionGroupsListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
