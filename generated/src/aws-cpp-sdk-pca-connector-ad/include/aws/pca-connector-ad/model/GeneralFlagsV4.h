/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

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
   * <p>General flags for v4 template schema that defines if the template is for a
   * machine or a user and if the template can be issued using
   * autoenrollment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GeneralFlagsV4">AWS
   * API Reference</a></p>
   */
  class GeneralFlagsV4
  {
  public:
    AWS_PCACONNECTORAD_API GeneralFlagsV4();
    AWS_PCACONNECTORAD_API GeneralFlagsV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API GeneralFlagsV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows certificate issuance using autoenrollment. Set to TRUE to allow
     * autoenrollment.</p>
     */
    inline bool GetAutoEnrollment() const{ return m_autoEnrollment; }

    /**
     * <p>Allows certificate issuance using autoenrollment. Set to TRUE to allow
     * autoenrollment.</p>
     */
    inline bool AutoEnrollmentHasBeenSet() const { return m_autoEnrollmentHasBeenSet; }

    /**
     * <p>Allows certificate issuance using autoenrollment. Set to TRUE to allow
     * autoenrollment.</p>
     */
    inline void SetAutoEnrollment(bool value) { m_autoEnrollmentHasBeenSet = true; m_autoEnrollment = value; }

    /**
     * <p>Allows certificate issuance using autoenrollment. Set to TRUE to allow
     * autoenrollment.</p>
     */
    inline GeneralFlagsV4& WithAutoEnrollment(bool value) { SetAutoEnrollment(value); return *this;}


    /**
     * <p>Defines if the template is for machines or users. Set to TRUE if the template
     * is for machines. Set to FALSE if the template is for users</p>
     */
    inline bool GetMachineType() const{ return m_machineType; }

    /**
     * <p>Defines if the template is for machines or users. Set to TRUE if the template
     * is for machines. Set to FALSE if the template is for users</p>
     */
    inline bool MachineTypeHasBeenSet() const { return m_machineTypeHasBeenSet; }

    /**
     * <p>Defines if the template is for machines or users. Set to TRUE if the template
     * is for machines. Set to FALSE if the template is for users</p>
     */
    inline void SetMachineType(bool value) { m_machineTypeHasBeenSet = true; m_machineType = value; }

    /**
     * <p>Defines if the template is for machines or users. Set to TRUE if the template
     * is for machines. Set to FALSE if the template is for users</p>
     */
    inline GeneralFlagsV4& WithMachineType(bool value) { SetMachineType(value); return *this;}

  private:

    bool m_autoEnrollment;
    bool m_autoEnrollmentHasBeenSet = false;

    bool m_machineType;
    bool m_machineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
