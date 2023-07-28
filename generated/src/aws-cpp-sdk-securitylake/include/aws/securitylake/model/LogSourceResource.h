/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/AwsLogSourceResource.h>
#include <aws/securitylake/model/CustomLogSourceResource.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The supported source types from which logs and events are collected in Amazon
   * Security Lake. For a list of supported Amazon Web Services, see the <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
   * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/LogSourceResource">AWS
   * API Reference</a></p>
   */
  class LogSourceResource
  {
  public:
    AWS_SECURITYLAKE_API LogSourceResource();
    AWS_SECURITYLAKE_API LogSourceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API LogSourceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const AwsLogSourceResource& GetAwsLogSource() const{ return m_awsLogSource; }

    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline bool AwsLogSourceHasBeenSet() const { return m_awsLogSourceHasBeenSet; }

    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetAwsLogSource(const AwsLogSourceResource& value) { m_awsLogSourceHasBeenSet = true; m_awsLogSource = value; }

    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetAwsLogSource(AwsLogSourceResource&& value) { m_awsLogSourceHasBeenSet = true; m_awsLogSource = std::move(value); }

    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline LogSourceResource& WithAwsLogSource(const AwsLogSourceResource& value) { SetAwsLogSource(value); return *this;}

    /**
     * <p>Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services. For more information, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline LogSourceResource& WithAwsLogSource(AwsLogSourceResource&& value) { SetAwsLogSource(std::move(value)); return *this;}


    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const CustomLogSourceResource& GetCustomLogSource() const{ return m_customLogSource; }

    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline bool CustomLogSourceHasBeenSet() const { return m_customLogSourceHasBeenSet; }

    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetCustomLogSource(const CustomLogSourceResource& value) { m_customLogSourceHasBeenSet = true; m_customLogSource = value; }

    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetCustomLogSource(CustomLogSourceResource&& value) { m_customLogSourceHasBeenSet = true; m_customLogSource = std::move(value); }

    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline LogSourceResource& WithCustomLogSource(const CustomLogSourceResource& value) { SetCustomLogSource(value); return *this;}

    /**
     * <p>Amazon Security Lake supports custom source types. For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/custom-sources.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline LogSourceResource& WithCustomLogSource(CustomLogSourceResource&& value) { SetCustomLogSource(std::move(value)); return *this;}

  private:

    AwsLogSourceResource m_awsLogSource;
    bool m_awsLogSourceHasBeenSet = false;

    CustomLogSourceResource m_customLogSource;
    bool m_customLogSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
