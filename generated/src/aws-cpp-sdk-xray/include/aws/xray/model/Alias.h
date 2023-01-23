/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>An alias for an edge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Alias">AWS API
   * Reference</a></p>
   */
  class Alias
  {
  public:
    AWS_XRAY_API Alias();
    AWS_XRAY_API Alias(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Alias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The canonical name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline Alias& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline Alias& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The canonical name of the alias.</p>
     */
    inline Alias& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline Alias& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline Alias& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline Alias& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline Alias& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names for the alias, including the canonical name.</p>
     */
    inline Alias& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>The type of the alias.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the alias.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the alias.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the alias.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the alias.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the alias.</p>
     */
    inline Alias& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the alias.</p>
     */
    inline Alias& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the alias.</p>
     */
    inline Alias& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
