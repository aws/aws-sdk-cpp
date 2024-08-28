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
   * <p>An Amazon EC2 launch template Amazon Web Services PCS uses to launch compute
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/CustomLaunchTemplate">AWS
   * API Reference</a></p>
   */
  class CustomLaunchTemplate
  {
  public:
    AWS_PCS_API CustomLaunchTemplate();
    AWS_PCS_API CustomLaunchTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API CustomLaunchTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the EC2 launch template to use to provision instances.</p> <p>
     * Example: <code>lt-xxxx</code> </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CustomLaunchTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CustomLaunchTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CustomLaunchTemplate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the EC2 launch template to use to provision instances.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CustomLaunchTemplate& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CustomLaunchTemplate& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CustomLaunchTemplate& WithVersion(const char* value) { SetVersion(value); return *this;}
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
