/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/CreatorModeControl.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information required to invoke chat in
   * <code>CREATOR_MODE</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
   * controls and guardrails</a> and <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
   * settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreatorModeConfiguration">AWS
   * API Reference</a></p>
   */
  class CreatorModeConfiguration
  {
  public:
    AWS_QBUSINESS_API CreatorModeConfiguration();
    AWS_QBUSINESS_API CreatorModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CreatorModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline const CreatorModeControl& GetCreatorModeControl() const{ return m_creatorModeControl; }

    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline bool CreatorModeControlHasBeenSet() const { return m_creatorModeControlHasBeenSet; }

    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline void SetCreatorModeControl(const CreatorModeControl& value) { m_creatorModeControlHasBeenSet = true; m_creatorModeControl = value; }

    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline void SetCreatorModeControl(CreatorModeControl&& value) { m_creatorModeControlHasBeenSet = true; m_creatorModeControl = std::move(value); }

    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline CreatorModeConfiguration& WithCreatorModeControl(const CreatorModeControl& value) { SetCreatorModeControl(value); return *this;}

    /**
     * <p>Status information about whether <code>CREATOR_MODE</code> has been enabled
     * or disabled. The default status is <code>DISABLED</code>.</p>
     */
    inline CreatorModeConfiguration& WithCreatorModeControl(CreatorModeControl&& value) { SetCreatorModeControl(std::move(value)); return *this;}

  private:

    CreatorModeControl m_creatorModeControl;
    bool m_creatorModeControlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
