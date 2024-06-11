﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes a header match type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/HeaderMatchType">AWS
   * API Reference</a></p>
   */
  class HeaderMatchType
  {
  public:
    AWS_VPCLATTICE_API HeaderMatchType();
    AWS_VPCLATTICE_API HeaderMatchType(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HeaderMatchType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A contains type match.</p>
     */
    inline const Aws::String& GetContains() const{ return m_contains; }
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }
    inline void SetContains(const Aws::String& value) { m_containsHasBeenSet = true; m_contains = value; }
    inline void SetContains(Aws::String&& value) { m_containsHasBeenSet = true; m_contains = std::move(value); }
    inline void SetContains(const char* value) { m_containsHasBeenSet = true; m_contains.assign(value); }
    inline HeaderMatchType& WithContains(const Aws::String& value) { SetContains(value); return *this;}
    inline HeaderMatchType& WithContains(Aws::String&& value) { SetContains(std::move(value)); return *this;}
    inline HeaderMatchType& WithContains(const char* value) { SetContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An exact type match.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }
    inline HeaderMatchType& WithExact(const Aws::String& value) { SetExact(value); return *this;}
    inline HeaderMatchType& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}
    inline HeaderMatchType& WithExact(const char* value) { SetExact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix type match. Matches the value with the prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline HeaderMatchType& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline HeaderMatchType& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline HeaderMatchType& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_contains;
    bool m_containsHasBeenSet = false;

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
