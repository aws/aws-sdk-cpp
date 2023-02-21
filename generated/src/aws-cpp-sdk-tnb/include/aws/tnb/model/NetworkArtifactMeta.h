/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/tnb/model/ToscaOverride.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Metadata for network package artifacts.</p> <p>Artifacts are the contents of
   * the package descriptor file and the state of the package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/NetworkArtifactMeta">AWS
   * API Reference</a></p>
   */
  class NetworkArtifactMeta
  {
  public:
    AWS_TNB_API NetworkArtifactMeta();
    AWS_TNB_API NetworkArtifactMeta(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API NetworkArtifactMeta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists network package overrides.</p>
     */
    inline const Aws::Vector<ToscaOverride>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Lists network package overrides.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Lists network package overrides.</p>
     */
    inline void SetOverrides(const Aws::Vector<ToscaOverride>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Lists network package overrides.</p>
     */
    inline void SetOverrides(Aws::Vector<ToscaOverride>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Lists network package overrides.</p>
     */
    inline NetworkArtifactMeta& WithOverrides(const Aws::Vector<ToscaOverride>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Lists network package overrides.</p>
     */
    inline NetworkArtifactMeta& WithOverrides(Aws::Vector<ToscaOverride>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Lists network package overrides.</p>
     */
    inline NetworkArtifactMeta& AddOverrides(const ToscaOverride& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Lists network package overrides.</p>
     */
    inline NetworkArtifactMeta& AddOverrides(ToscaOverride&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ToscaOverride> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
