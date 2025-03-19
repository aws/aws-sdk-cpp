/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OSIS
{
namespace Model
{

  /**
   */
  class GetPipelineBlueprintRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API GetPipelineBlueprintRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPipelineBlueprint"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;

    AWS_OSIS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    template<typename BlueprintNameT = Aws::String>
    void SetBlueprintName(BlueprintNameT&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::forward<BlueprintNameT>(value); }
    template<typename BlueprintNameT = Aws::String>
    GetPipelineBlueprintRequest& WithBlueprintName(BlueprintNameT&& value) { SetBlueprintName(std::forward<BlueprintNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    GetPipelineBlueprintRequest& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
