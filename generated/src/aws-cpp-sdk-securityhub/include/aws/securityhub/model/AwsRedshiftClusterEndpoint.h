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
   * <p>The connection endpoint for an Amazon Redshift cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterEndpoint">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterEndpoint
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterEndpoint();
    AWS_SECURITYHUB_API AwsRedshiftClusterEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline AwsRedshiftClusterEndpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline AwsRedshiftClusterEndpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the cluster.</p>
     */
    inline AwsRedshiftClusterEndpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port that the database engine listens on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that the database engine listens on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that the database engine listens on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that the database engine listens on.</p>
     */
    inline AwsRedshiftClusterEndpoint& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
