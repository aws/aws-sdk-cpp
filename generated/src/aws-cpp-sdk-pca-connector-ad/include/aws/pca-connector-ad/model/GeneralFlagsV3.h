﻿/**
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
   * <p>General flags for v3 template schema that defines if the template is for a
   * machine or a user and if the template can be issued using
   * autoenrollment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GeneralFlagsV3">AWS
   * API Reference</a></p>
   */
  class GeneralFlagsV3
  {
  public:
    AWS_PCACONNECTORAD_API GeneralFlagsV3();
    AWS_PCACONNECTORAD_API GeneralFlagsV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API GeneralFlagsV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows certificate issuance using autoenrollment. Set to TRUE to allow
     * autoenrollment.</p>
     */
    inline bool GetAutoEnrollment() const{ return m_autoEnrollment; }
    inline bool AutoEnrollmentHasBeenSet() const { return m_autoEnrollmentHasBeenSet; }
    inline void SetAutoEnrollment(bool value) { m_autoEnrollmentHasBeenSet = true; m_autoEnrollment = value; }
    inline GeneralFlagsV3& WithAutoEnrollment(bool value) { SetAutoEnrollment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the template is for machines or users. Set to TRUE if the template
     * is for machines. Set to FALSE if the template is for users</p>
     */
    inline bool GetMachineType() const{ return m_machineType; }
    inline bool MachineTypeHasBeenSet() const { return m_machineTypeHasBeenSet; }
    inline void SetMachineType(bool value) { m_machineTypeHasBeenSet = true; m_machineType = value; }
    inline GeneralFlagsV3& WithMachineType(bool value) { SetMachineType(value); return *this;}
    ///@}
  private:

    bool m_autoEnrollment;
    bool m_autoEnrollmentHasBeenSet = false;

    bool m_machineType;
    bool m_machineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
