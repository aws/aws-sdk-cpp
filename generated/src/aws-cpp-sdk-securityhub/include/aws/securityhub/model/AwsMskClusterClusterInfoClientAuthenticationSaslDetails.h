/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails.h>
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
   * <p> Provides details for client authentication using SASL.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoClientAuthenticationSaslDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoClientAuthenticationSaslDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationSaslDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationSaslDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationSaslDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails& GetIam() const{ return m_iam; }

    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline void SetIam(const AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline void SetIam(AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationSaslDetails& WithIam(const AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails& value) { SetIam(value); return *this;}

    /**
     * <p> Provides details for SASL client authentication using IAM. </p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationSaslDetails& WithIam(AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails&& value) { SetIam(std::move(value)); return *this;}


    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails& GetScram() const{ return m_scram; }

    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline bool ScramHasBeenSet() const { return m_scramHasBeenSet; }

    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline void SetScram(const AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails& value) { m_scramHasBeenSet = true; m_scram = value; }

    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline void SetScram(AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails&& value) { m_scramHasBeenSet = true; m_scram = std::move(value); }

    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationSaslDetails& WithScram(const AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails& value) { SetScram(value); return *this;}

    /**
     * <p> Details for SASL client authentication using SCRAM.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationSaslDetails& WithScram(AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails&& value) { SetScram(std::move(value)); return *this;}

  private:

    AwsMskClusterClusterInfoClientAuthenticationSaslIamDetails m_iam;
    bool m_iamHasBeenSet = false;

    AwsMskClusterClusterInfoClientAuthenticationSaslScramDetails m_scram;
    bool m_scramHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
