/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>An Amazon EC2 launch template PCS uses to launch compute nodes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/CustomLaunchTemplate">AWS
   * API Reference</a></p>
   */
  class CustomLaunchTemplate
  {
  public:
    AWS_PCS_API CustomLaunchTemplate() = default;
    AWS_PCS_API CustomLaunchTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API CustomLaunchTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the EC2 launch template to use to provision instances.</p> <p>
     * Example: <code>lt-xxxx</code> </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CustomLaunchTemplate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the EC2 launch template to use to provision instances.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CustomLaunchTemplate& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
