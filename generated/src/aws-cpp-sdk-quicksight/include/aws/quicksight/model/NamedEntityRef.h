/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>NamedEntityRef</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamedEntityRef">AWS
   * API Reference</a></p>
   */
  class NamedEntityRef
  {
  public:
    AWS_QUICKSIGHT_API NamedEntityRef() = default;
    AWS_QUICKSIGHT_API NamedEntityRef(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamedEntityRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>NamedEntityName</code> for the <code>NamedEntityRef</code>.</p>
     */
    inline const Aws::String& GetNamedEntityName() const { return m_namedEntityName; }
    inline bool NamedEntityNameHasBeenSet() const { return m_namedEntityNameHasBeenSet; }
    template<typename NamedEntityNameT = Aws::String>
    void SetNamedEntityName(NamedEntityNameT&& value) { m_namedEntityNameHasBeenSet = true; m_namedEntityName = std::forward<NamedEntityNameT>(value); }
    template<typename NamedEntityNameT = Aws::String>
    NamedEntityRef& WithNamedEntityName(NamedEntityNameT&& value) { SetNamedEntityName(std::forward<NamedEntityNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namedEntityName;
    bool m_namedEntityNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
