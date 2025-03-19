/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Details about a Lambda layer version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaLayerVersionDetails">AWS
   * API Reference</a></p>
   */
  class AwsLambdaLayerVersionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaLayerVersionDetails() = default;
    AWS_SECURITYHUB_API AwsLambdaLayerVersionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaLayerVersionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline AwsLambdaLayerVersionDetails& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer's compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>.</p> <p>The following list includes deprecated runtimes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a> in the <i>Lambda Developer Guide</i>.</p> <p>Array
     * Members: Maximum number of 5 items.</p> <p>Valid Values: <code>nodejs |
     * nodejs4.3 | nodejs6.10 | nodejs8.10 | nodejs10.x | nodejs12.x | nodejs14.x |
     * nodejs16.x | java8 | java8.al2 | java11 | python2.7 | python3.6 | python3.7 |
     * python3.8 | python3.9 | dotnetcore1.0 | dotnetcore2.0 | dotnetcore2.1 |
     * dotnetcore3.1 | dotnet6 | nodejs4.3-edge | go1.x | ruby2.5 | ruby2.7 | provided
     * | provided.al2 | nodejs18.x | python3.10 | java17 | ruby3.2 | python3.11 |
     * nodejs20.x | provided.al2023 | python3.12 | java21</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCompatibleRuntimes() const { return m_compatibleRuntimes; }
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }
    template<typename CompatibleRuntimesT = Aws::Vector<Aws::String>>
    void SetCompatibleRuntimes(CompatibleRuntimesT&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::forward<CompatibleRuntimesT>(value); }
    template<typename CompatibleRuntimesT = Aws::Vector<Aws::String>>
    AwsLambdaLayerVersionDetails& WithCompatibleRuntimes(CompatibleRuntimesT&& value) { SetCompatibleRuntimes(std::forward<CompatibleRuntimesT>(value)); return *this;}
    template<typename CompatibleRuntimesT = Aws::String>
    AwsLambdaLayerVersionDetails& AddCompatibleRuntimes(CompatibleRuntimesT&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.emplace_back(std::forward<CompatibleRuntimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the version was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    AwsLambdaLayerVersionDetails& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}
  private:

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
