/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/Textract_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Textract {
namespace Model {

/**
 */
class GetBlueprintRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API GetBlueprintRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBlueprint"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the blueprint to retrieve.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  GetBlueprintRequest& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the blueprint to retrieve. If omitted, the latest version is
   * returned.</p>
   */
  inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
  inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
  template <typename BlueprintVersionT = Aws::String>
  void SetBlueprintVersion(BlueprintVersionT&& value) {
    m_blueprintVersionHasBeenSet = true;
    m_blueprintVersion = std::forward<BlueprintVersionT>(value);
  }
  template <typename BlueprintVersionT = Aws::String>
  GetBlueprintRequest& WithBlueprintVersion(BlueprintVersionT&& value) {
    SetBlueprintVersion(std::forward<BlueprintVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_blueprintArn;

  Aws::String m_blueprintVersion;
  bool m_blueprintArnHasBeenSet = false;
  bool m_blueprintVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
