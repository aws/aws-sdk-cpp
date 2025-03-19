/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/OptionGroupOption.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOptionGroupOptionsResult
  {
  public:
    AWS_RDS_API DescribeOptionGroupOptionsResult() = default;
    AWS_RDS_API DescribeOptionGroupOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeOptionGroupOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<OptionGroupOption>& GetOptionGroupOptions() const { return m_optionGroupOptions; }
    template<typename OptionGroupOptionsT = Aws::Vector<OptionGroupOption>>
    void SetOptionGroupOptions(OptionGroupOptionsT&& value) { m_optionGroupOptionsHasBeenSet = true; m_optionGroupOptions = std::forward<OptionGroupOptionsT>(value); }
    template<typename OptionGroupOptionsT = Aws::Vector<OptionGroupOption>>
    DescribeOptionGroupOptionsResult& WithOptionGroupOptions(OptionGroupOptionsT&& value) { SetOptionGroupOptions(std::forward<OptionGroupOptionsT>(value)); return *this;}
    template<typename OptionGroupOptionsT = OptionGroupOption>
    DescribeOptionGroupOptionsResult& AddOptionGroupOptions(OptionGroupOptionsT&& value) { m_optionGroupOptionsHasBeenSet = true; m_optionGroupOptions.emplace_back(std::forward<OptionGroupOptionsT>(value)); return *this; }
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
    DescribeOptionGroupOptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeOptionGroupOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptionGroupOption> m_optionGroupOptions;
    bool m_optionGroupOptionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
