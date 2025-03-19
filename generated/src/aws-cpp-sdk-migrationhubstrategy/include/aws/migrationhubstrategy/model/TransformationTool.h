/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/TransformationToolName.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information of the transformation tool that can be used to migrate and
   * modernize the application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/TransformationTool">AWS
   * API Reference</a></p>
   */
  class TransformationTool
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Description of the tool. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TransformationTool& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the tool. </p>
     */
    inline TransformationToolName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(TransformationToolName value) { m_nameHasBeenSet = true; m_name = value; }
    inline TransformationTool& WithName(TransformationToolName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> URL for installing the tool. </p>
     */
    inline const Aws::String& GetTranformationToolInstallationLink() const { return m_tranformationToolInstallationLink; }
    inline bool TranformationToolInstallationLinkHasBeenSet() const { return m_tranformationToolInstallationLinkHasBeenSet; }
    template<typename TranformationToolInstallationLinkT = Aws::String>
    void SetTranformationToolInstallationLink(TranformationToolInstallationLinkT&& value) { m_tranformationToolInstallationLinkHasBeenSet = true; m_tranformationToolInstallationLink = std::forward<TranformationToolInstallationLinkT>(value); }
    template<typename TranformationToolInstallationLinkT = Aws::String>
    TransformationTool& WithTranformationToolInstallationLink(TranformationToolInstallationLinkT&& value) { SetTranformationToolInstallationLink(std::forward<TranformationToolInstallationLinkT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TransformationToolName m_name{TransformationToolName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_tranformationToolInstallationLink;
    bool m_tranformationToolInstallationLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
