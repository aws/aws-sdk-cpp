/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Provides metadata for the Amazon CodeGuru detector associated with a
   * finding. This field pertains to findings that relate to Lambda functions. Amazon
   * Inspector identifies policy violations and vulnerabilities in Lambda function
   * code based on internal detectors developed in collaboration with Amazon
   * CodeGuru. Security Hub receives those findings. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GeneratorDetails">AWS
   * API Reference</a></p>
   */
  class GeneratorDetails
  {
  public:
    AWS_SECURITYHUB_API GeneratorDetails();
    AWS_SECURITYHUB_API GeneratorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API GeneratorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the detector used to identify the code vulnerability. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GeneratorDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GeneratorDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GeneratorDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the detector used to identify the code vulnerability.
     * </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GeneratorDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GeneratorDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GeneratorDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of tags used to identify the detector associated with the finding.
     * </p> <p>Array Members: Minimum number of 0 items. Maximum number of 10
     * items.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline GeneratorDetails& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}
    inline GeneratorDetails& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline GeneratorDetails& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline GeneratorDetails& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    inline GeneratorDetails& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
