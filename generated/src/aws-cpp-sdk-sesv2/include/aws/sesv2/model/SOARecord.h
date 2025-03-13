/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about the start of authority (SOA) record
   * associated with the identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SOARecord">AWS API
   * Reference</a></p>
   */
  class SOARecord
  {
  public:
    AWS_SESV2_API SOARecord() = default;
    AWS_SESV2_API SOARecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SOARecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline const Aws::String& GetPrimaryNameServer() const { return m_primaryNameServer; }
    inline bool PrimaryNameServerHasBeenSet() const { return m_primaryNameServerHasBeenSet; }
    template<typename PrimaryNameServerT = Aws::String>
    void SetPrimaryNameServer(PrimaryNameServerT&& value) { m_primaryNameServerHasBeenSet = true; m_primaryNameServer = std::forward<PrimaryNameServerT>(value); }
    template<typename PrimaryNameServerT = Aws::String>
    SOARecord& WithPrimaryNameServer(PrimaryNameServerT&& value) { SetPrimaryNameServer(std::forward<PrimaryNameServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline const Aws::String& GetAdminEmail() const { return m_adminEmail; }
    inline bool AdminEmailHasBeenSet() const { return m_adminEmailHasBeenSet; }
    template<typename AdminEmailT = Aws::String>
    void SetAdminEmail(AdminEmailT&& value) { m_adminEmailHasBeenSet = true; m_adminEmail = std::forward<AdminEmailT>(value); }
    template<typename AdminEmailT = Aws::String>
    SOARecord& WithAdminEmail(AdminEmailT&& value) { SetAdminEmail(std::forward<AdminEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serial number from the SOA record.</p>
     */
    inline long long GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(long long value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline SOARecord& WithSerialNumber(long long value) { SetSerialNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryNameServer;
    bool m_primaryNameServerHasBeenSet = false;

    Aws::String m_adminEmail;
    bool m_adminEmailHasBeenSet = false;

    long long m_serialNumber{0};
    bool m_serialNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
