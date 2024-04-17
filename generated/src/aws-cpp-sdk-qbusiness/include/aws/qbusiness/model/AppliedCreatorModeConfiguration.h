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
   * <p>The creator mode specific admin controls configured for an Amazon Q Business
   * application. Determines whether an end user can generate LLM-only responses when
   * they use the web experience.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
   * controls and guardrails</a> and <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
   * settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AppliedCreatorModeConfiguration">AWS
   * API Reference</a></p>
   */
  class AppliedCreatorModeConfiguration
  {
  public:
    AWS_QBUSINESS_API AppliedCreatorModeConfiguration();
    AWS_QBUSINESS_API AppliedCreatorModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AppliedCreatorModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline const CreatorModeControl& GetCreatorModeControl() const{ return m_creatorModeControl; }

    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline bool CreatorModeControlHasBeenSet() const { return m_creatorModeControlHasBeenSet; }

    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline void SetCreatorModeControl(const CreatorModeControl& value) { m_creatorModeControlHasBeenSet = true; m_creatorModeControl = value; }

    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline void SetCreatorModeControl(CreatorModeControl&& value) { m_creatorModeControlHasBeenSet = true; m_creatorModeControl = std::move(value); }

    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline AppliedCreatorModeConfiguration& WithCreatorModeControl(const CreatorModeControl& value) { SetCreatorModeControl(value); return *this;}

    /**
     * <p> Information about whether creator mode is enabled or disabled for an Amazon
     * Q Business application. </p>
     */
    inline AppliedCreatorModeConfiguration& WithCreatorModeControl(CreatorModeControl&& value) { SetCreatorModeControl(std::move(value)); return *this;}

  private:

    CreatorModeControl m_creatorModeControl;
    bool m_creatorModeControlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
