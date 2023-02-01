/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/EstablishedMultiRegionAccessPointPolicy.h>
#include <aws/s3control/model/ProposedMultiRegionAccessPointPolicy.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The Multi-Region Access Point access control policy.</p> <p>When you update
   * the policy, the update is first listed as the proposed policy. After the update
   * is finished and all Regions have been updated, the proposed policy is listed as
   * the established policy. If both policies have the same version number, the
   * proposed policy is the established policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MultiRegionAccessPointPolicyDocument">AWS
   * API Reference</a></p>
   */
  class MultiRegionAccessPointPolicyDocument
  {
  public:
    AWS_S3CONTROL_API MultiRegionAccessPointPolicyDocument();
    AWS_S3CONTROL_API MultiRegionAccessPointPolicyDocument(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointPolicyDocument& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline const EstablishedMultiRegionAccessPointPolicy& GetEstablished() const{ return m_established; }

    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline bool EstablishedHasBeenSet() const { return m_establishedHasBeenSet; }

    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline void SetEstablished(const EstablishedMultiRegionAccessPointPolicy& value) { m_establishedHasBeenSet = true; m_established = value; }

    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline void SetEstablished(EstablishedMultiRegionAccessPointPolicy&& value) { m_establishedHasBeenSet = true; m_established = std::move(value); }

    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointPolicyDocument& WithEstablished(const EstablishedMultiRegionAccessPointPolicy& value) { SetEstablished(value); return *this;}

    /**
     * <p>The last established policy for the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointPolicyDocument& WithEstablished(EstablishedMultiRegionAccessPointPolicy&& value) { SetEstablished(std::move(value)); return *this;}


    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline const ProposedMultiRegionAccessPointPolicy& GetProposed() const{ return m_proposed; }

    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline bool ProposedHasBeenSet() const { return m_proposedHasBeenSet; }

    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline void SetProposed(const ProposedMultiRegionAccessPointPolicy& value) { m_proposedHasBeenSet = true; m_proposed = value; }

    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline void SetProposed(ProposedMultiRegionAccessPointPolicy&& value) { m_proposedHasBeenSet = true; m_proposed = std::move(value); }

    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointPolicyDocument& WithProposed(const ProposedMultiRegionAccessPointPolicy& value) { SetProposed(value); return *this;}

    /**
     * <p>The proposed policy for the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointPolicyDocument& WithProposed(ProposedMultiRegionAccessPointPolicy&& value) { SetProposed(std::move(value)); return *this;}

  private:

    EstablishedMultiRegionAccessPointPolicy m_established;
    bool m_establishedHasBeenSet = false;

    ProposedMultiRegionAccessPointPolicy m_proposed;
    bool m_proposedHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
