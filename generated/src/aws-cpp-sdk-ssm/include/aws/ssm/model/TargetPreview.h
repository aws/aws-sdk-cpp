/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the resources that would be included in the actual runbook
   * execution, if it were to be run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TargetPreview">AWS
   * API Reference</a></p>
   */
  class TargetPreview
  {
  public:
    AWS_SSM_API TargetPreview();
    AWS_SSM_API TargetPreview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API TargetPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of resources of a certain type included in an execution
     * preview.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline TargetPreview& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A type of resource that was included in the execution preview.</p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }
    inline TargetPreview& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}
    inline TargetPreview& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}
    inline TargetPreview& WithTargetType(const char* value) { SetTargetType(value); return *this;}
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
