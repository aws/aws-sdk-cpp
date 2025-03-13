/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/Service.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/GraphLink.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p> Retrieved information about an application that processed requests, users
   * that made requests, or downstream services, resources, and applications that an
   * application used. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/RetrievedService">AWS
   * API Reference</a></p>
   */
  class RetrievedService
  {
  public:
    AWS_XRAY_API RetrievedService() = default;
    AWS_XRAY_API RetrievedService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API RetrievedService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Service& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Service>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Service>
    RetrievedService& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Relation between two 2 services. </p>
     */
    inline const Aws::Vector<GraphLink>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Vector<GraphLink>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Vector<GraphLink>>
    RetrievedService& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksT = GraphLink>
    RetrievedService& AddLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links.emplace_back(std::forward<LinksT>(value)); return *this; }
    ///@}
  private:

    Service m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<GraphLink> m_links;
    bool m_linksHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
