/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>A DNS record uploaded to your DNS provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DnsRecord">AWS
   * API Reference</a></p>
   */
  class DnsRecord
  {
  public:
    AWS_WORKMAIL_API DnsRecord();
    AWS_WORKMAIL_API DnsRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API DnsRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline DnsRecord& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline DnsRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline DnsRecord& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline DnsRecord& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline DnsRecord& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline DnsRecord& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline DnsRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline DnsRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline DnsRecord& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
