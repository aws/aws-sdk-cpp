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
    AWS_SESV2_API SOARecord();
    AWS_SESV2_API SOARecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SOARecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline const Aws::String& GetPrimaryNameServer() const{ return m_primaryNameServer; }

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline bool PrimaryNameServerHasBeenSet() const { return m_primaryNameServerHasBeenSet; }

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline void SetPrimaryNameServer(const Aws::String& value) { m_primaryNameServerHasBeenSet = true; m_primaryNameServer = value; }

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline void SetPrimaryNameServer(Aws::String&& value) { m_primaryNameServerHasBeenSet = true; m_primaryNameServer = std::move(value); }

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline void SetPrimaryNameServer(const char* value) { m_primaryNameServerHasBeenSet = true; m_primaryNameServer.assign(value); }

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline SOARecord& WithPrimaryNameServer(const Aws::String& value) { SetPrimaryNameServer(value); return *this;}

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline SOARecord& WithPrimaryNameServer(Aws::String&& value) { SetPrimaryNameServer(std::move(value)); return *this;}

    /**
     * <p>Primary name server specified in the SOA record.</p>
     */
    inline SOARecord& WithPrimaryNameServer(const char* value) { SetPrimaryNameServer(value); return *this;}


    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline const Aws::String& GetAdminEmail() const{ return m_adminEmail; }

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline bool AdminEmailHasBeenSet() const { return m_adminEmailHasBeenSet; }

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline void SetAdminEmail(const Aws::String& value) { m_adminEmailHasBeenSet = true; m_adminEmail = value; }

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline void SetAdminEmail(Aws::String&& value) { m_adminEmailHasBeenSet = true; m_adminEmail = std::move(value); }

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline void SetAdminEmail(const char* value) { m_adminEmailHasBeenSet = true; m_adminEmail.assign(value); }

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline SOARecord& WithAdminEmail(const Aws::String& value) { SetAdminEmail(value); return *this;}

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline SOARecord& WithAdminEmail(Aws::String&& value) { SetAdminEmail(std::move(value)); return *this;}

    /**
     * <p>Administrative contact email from the SOA record.</p>
     */
    inline SOARecord& WithAdminEmail(const char* value) { SetAdminEmail(value); return *this;}


    /**
     * <p>Serial number from the SOA record.</p>
     */
    inline long long GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>Serial number from the SOA record.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>Serial number from the SOA record.</p>
     */
    inline void SetSerialNumber(long long value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>Serial number from the SOA record.</p>
     */
    inline SOARecord& WithSerialNumber(long long value) { SetSerialNumber(value); return *this;}

  private:

    Aws::String m_primaryNameServer;
    bool m_primaryNameServerHasBeenSet = false;

    Aws::String m_adminEmail;
    bool m_adminEmailHasBeenSet = false;

    long long m_serialNumber;
    bool m_serialNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
