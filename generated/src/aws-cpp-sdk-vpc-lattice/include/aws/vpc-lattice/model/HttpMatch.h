/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/PathMatch.h>
#include <aws/vpc-lattice/model/HeaderMatch.h>
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
   * <p>Describes criteria that can be applied to incoming requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/HttpMatch">AWS
   * API Reference</a></p>
   */
  class HttpMatch
  {
  public:
    AWS_VPCLATTICE_API HttpMatch() = default;
    AWS_VPCLATTICE_API HttpMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HttpMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline const Aws::Vector<HeaderMatch>& GetHeaderMatches() const { return m_headerMatches; }
    inline bool HeaderMatchesHasBeenSet() const { return m_headerMatchesHasBeenSet; }
    template<typename HeaderMatchesT = Aws::Vector<HeaderMatch>>
    void SetHeaderMatches(HeaderMatchesT&& value) { m_headerMatchesHasBeenSet = true; m_headerMatches = std::forward<HeaderMatchesT>(value); }
    template<typename HeaderMatchesT = Aws::Vector<HeaderMatch>>
    HttpMatch& WithHeaderMatches(HeaderMatchesT&& value) { SetHeaderMatches(std::forward<HeaderMatchesT>(value)); return *this;}
    template<typename HeaderMatchesT = HeaderMatch>
    HttpMatch& AddHeaderMatches(HeaderMatchesT&& value) { m_headerMatchesHasBeenSet = true; m_headerMatches.emplace_back(std::forward<HeaderMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP method type.</p>
     */
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    HttpMatch& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path match.</p>
     */
    inline const PathMatch& GetPathMatch() const { return m_pathMatch; }
    inline bool PathMatchHasBeenSet() const { return m_pathMatchHasBeenSet; }
    template<typename PathMatchT = PathMatch>
    void SetPathMatch(PathMatchT&& value) { m_pathMatchHasBeenSet = true; m_pathMatch = std::forward<PathMatchT>(value); }
    template<typename PathMatchT = PathMatch>
    HttpMatch& WithPathMatch(PathMatchT&& value) { SetPathMatch(std::forward<PathMatchT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HeaderMatch> m_headerMatches;
    bool m_headerMatchesHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    PathMatch m_pathMatch;
    bool m_pathMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
