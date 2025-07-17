/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/DependencyType.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains information about a dependency for a
   * canary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/Dependency">AWS
   * API Reference</a></p>
   */
  class Dependency
  {
  public:
    AWS_SYNTHETICS_API Dependency() = default;
    AWS_SYNTHETICS_API Dependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Dependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of dependency. Valid value is <code>LambdaLayer</code>.</p>
     */
    inline DependencyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DependencyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Dependency& WithType(DependencyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependency reference. For Lambda layers, this is the ARN of the Lambda
     * layer. For more information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/api/API_Layer.html">Lambda</a>.</p>
     */
    inline const Aws::String& GetReference() const { return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    template<typename ReferenceT = Aws::String>
    void SetReference(ReferenceT&& value) { m_referenceHasBeenSet = true; m_reference = std::forward<ReferenceT>(value); }
    template<typename ReferenceT = Aws::String>
    Dependency& WithReference(ReferenceT&& value) { SetReference(std::forward<ReferenceT>(value)); return *this;}
    ///@}
  private:

    DependencyType m_type{DependencyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_reference;
    bool m_referenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
