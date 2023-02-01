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
   * <p>Information about a bind mount host volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionVolumesHostDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionVolumesHostDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesHostDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesHostDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesHostDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline AwsEcsTaskDefinitionVolumesHostDetails& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline AwsEcsTaskDefinitionVolumesHostDetails& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the
     * container.</p>
     */
    inline AwsEcsTaskDefinitionVolumesHostDetails& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
