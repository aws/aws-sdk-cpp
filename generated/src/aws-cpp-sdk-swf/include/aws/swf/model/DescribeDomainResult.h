/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/DomainInfo.h>
#include <aws/swf/model/DomainConfiguration.h>
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
   * <p>Contains details of a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainDetail">AWS
   * API Reference</a></p>
   */
  class DescribeDomainResult
  {
  public:
    AWS_SWF_API DescribeDomainResult() = default;
    AWS_SWF_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline const DomainInfo& GetDomainInfo() const { return m_domainInfo; }
    template<typename DomainInfoT = DomainInfo>
    void SetDomainInfo(DomainInfoT&& value) { m_domainInfoHasBeenSet = true; m_domainInfo = std::forward<DomainInfoT>(value); }
    template<typename DomainInfoT = DomainInfo>
    DescribeDomainResult& WithDomainInfo(DomainInfoT&& value) { SetDomainInfo(std::forward<DomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline const DomainConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = DomainConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DomainConfiguration>
    DescribeDomainResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainInfo m_domainInfo;
    bool m_domainInfoHasBeenSet = false;

    DomainConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
