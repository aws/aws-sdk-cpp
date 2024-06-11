/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/AwsLogSourceName.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Amazon Security Lake can collect logs and events from natively-supported
   * Amazon Web Services services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/AwsLogSourceResource">AWS
   * API Reference</a></p>
   */
  class AwsLogSourceResource
  {
  public:
    AWS_SECURITYLAKE_API AwsLogSourceResource();
    AWS_SECURITYLAKE_API AwsLogSourceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AwsLogSourceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for a Amazon Web Services source. This must be a Regionally unique
     * value.</p>
     */
    inline const AwsLogSourceName& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const AwsLogSourceName& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(AwsLogSourceName&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline AwsLogSourceResource& WithSourceName(const AwsLogSourceName& value) { SetSourceName(value); return *this;}
    inline AwsLogSourceResource& WithSourceName(AwsLogSourceName&& value) { SetSourceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for a Amazon Web Services source. This must be a Regionally
     * unique value.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline AwsLogSourceResource& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline AwsLogSourceResource& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline AwsLogSourceResource& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}
  private:

    AwsLogSourceName m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
