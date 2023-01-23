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
   * <p>A complex type that lists the CIDR blocks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CidrBlockSummary">AWS
   * API Reference</a></p>
   */
  class CidrBlockSummary
  {
  public:
    AWS_ROUTE53_API CidrBlockSummary();
    AWS_ROUTE53_API CidrBlockSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API CidrBlockSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Value for the CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline CidrBlockSummary& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline CidrBlockSummary& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>Value for the CIDR block.</p>
     */
    inline CidrBlockSummary& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline CidrBlockSummary& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline CidrBlockSummary& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}

    /**
     * <p>The location name of the CIDR block.</p>
     */
    inline CidrBlockSummary& WithLocationName(const char* value) { SetLocationName(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
