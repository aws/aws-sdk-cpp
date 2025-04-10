/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/PersonalizationControlMode.h>
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
   * <p>Configuration information about chat response personalization. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
   * chat responses</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PersonalizationConfiguration">AWS
   * API Reference</a></p>
   */
  class PersonalizationConfiguration
  {
  public:
    AWS_QBUSINESS_API PersonalizationConfiguration() = default;
    AWS_QBUSINESS_API PersonalizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PersonalizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An option to allow Amazon Q Business to customize chat responses using user
     * specific metadata—specifically, location and job information—in your IAM
     * Identity Center instance.</p>
     */
    inline PersonalizationControlMode GetPersonalizationControlMode() const { return m_personalizationControlMode; }
    inline bool PersonalizationControlModeHasBeenSet() const { return m_personalizationControlModeHasBeenSet; }
    inline void SetPersonalizationControlMode(PersonalizationControlMode value) { m_personalizationControlModeHasBeenSet = true; m_personalizationControlMode = value; }
    inline PersonalizationConfiguration& WithPersonalizationControlMode(PersonalizationControlMode value) { SetPersonalizationControlMode(value); return *this;}
    ///@}
  private:

    PersonalizationControlMode m_personalizationControlMode{PersonalizationControlMode::NOT_SET};
    bool m_personalizationControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
