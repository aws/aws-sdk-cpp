/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Specifies the connection endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbInstanceEndpoint">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbInstanceEndpoint
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbInstanceEndpoint();
    AWS_SECURITYHUB_API AwsRdsDbInstanceEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>Specifies the DNS address of the DB instance.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline AwsRdsDbInstanceEndpoint& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
