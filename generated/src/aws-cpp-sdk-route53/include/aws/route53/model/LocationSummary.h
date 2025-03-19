/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the CIDR
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/LocationSummary">AWS
   * API Reference</a></p>
   */
  class LocationSummary
  {
  public:
    AWS_ROUTE53_API LocationSummary() = default;
    AWS_ROUTE53_API LocationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API LocationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A string that specifies a location name.</p>
     */
    inline const Aws::String& GetLocationName() const { return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    template<typename LocationNameT = Aws::String>
    void SetLocationName(LocationNameT&& value) { m_locationNameHasBeenSet = true; m_locationName = std::forward<LocationNameT>(value); }
    template<typename LocationNameT = Aws::String>
    LocationSummary& WithLocationName(LocationNameT&& value) { SetLocationName(std::forward<LocationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
