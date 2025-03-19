/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/AccessRight.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p> Allow or deny permissions for an Active Directory group to enroll or
   * autoenroll certificates for a template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/AccessRights">AWS
   * API Reference</a></p>
   */
  class AccessRights
  {
  public:
    AWS_PCACONNECTORAD_API AccessRights() = default;
    AWS_PCACONNECTORAD_API AccessRights(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API AccessRights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allow or deny an Active Directory group from autoenrolling certificates
     * issued against a template. The Active Directory group must be allowed to enroll
     * to allow autoenrollment</p>
     */
    inline AccessRight GetAutoEnroll() const { return m_autoEnroll; }
    inline bool AutoEnrollHasBeenSet() const { return m_autoEnrollHasBeenSet; }
    inline void SetAutoEnroll(AccessRight value) { m_autoEnrollHasBeenSet = true; m_autoEnroll = value; }
    inline AccessRights& WithAutoEnroll(AccessRight value) { SetAutoEnroll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allow or deny an Active Directory group from enrolling certificates issued
     * against a template.</p>
     */
    inline AccessRight GetEnroll() const { return m_enroll; }
    inline bool EnrollHasBeenSet() const { return m_enrollHasBeenSet; }
    inline void SetEnroll(AccessRight value) { m_enrollHasBeenSet = true; m_enroll = value; }
    inline AccessRights& WithEnroll(AccessRight value) { SetEnroll(value); return *this;}
    ///@}
  private:

    AccessRight m_autoEnroll{AccessRight::NOT_SET};
    bool m_autoEnrollHasBeenSet = false;

    AccessRight m_enroll{AccessRight::NOT_SET};
    bool m_enrollHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
