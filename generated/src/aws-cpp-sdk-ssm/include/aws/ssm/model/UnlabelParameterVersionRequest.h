/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UnlabelParameterVersionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UnlabelParameterVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnlabelParameterVersion"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the parameter from which you want to delete one or more
     * labels.</p>  <p>You can't enter the Amazon Resource Name (ARN) for a
     * parameter, only the parameter name itself.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UnlabelParameterVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UnlabelParameterVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UnlabelParameterVersionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific version of the parameter which you want to delete one or more
     * labels from. If it isn't present, the call will fail.</p>
     */
    inline long long GetParameterVersion() const{ return m_parameterVersion; }
    inline bool ParameterVersionHasBeenSet() const { return m_parameterVersionHasBeenSet; }
    inline void SetParameterVersion(long long value) { m_parameterVersionHasBeenSet = true; m_parameterVersion = value; }
    inline UnlabelParameterVersionRequest& WithParameterVersion(long long value) { SetParameterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more labels to delete from the specified parameter version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline UnlabelParameterVersionRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}
    inline UnlabelParameterVersionRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline UnlabelParameterVersionRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline UnlabelParameterVersionRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    inline UnlabelParameterVersionRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_parameterVersion;
    bool m_parameterVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
