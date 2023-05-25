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
    AWS_VPCLATTICE_API HttpMatch();
    AWS_VPCLATTICE_API HttpMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HttpMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline const Aws::Vector<HeaderMatch>& GetHeaderMatches() const{ return m_headerMatches; }

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline bool HeaderMatchesHasBeenSet() const { return m_headerMatchesHasBeenSet; }

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline void SetHeaderMatches(const Aws::Vector<HeaderMatch>& value) { m_headerMatchesHasBeenSet = true; m_headerMatches = value; }

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline void SetHeaderMatches(Aws::Vector<HeaderMatch>&& value) { m_headerMatchesHasBeenSet = true; m_headerMatches = std::move(value); }

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline HttpMatch& WithHeaderMatches(const Aws::Vector<HeaderMatch>& value) { SetHeaderMatches(value); return *this;}

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline HttpMatch& WithHeaderMatches(Aws::Vector<HeaderMatch>&& value) { SetHeaderMatches(std::move(value)); return *this;}

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline HttpMatch& AddHeaderMatches(const HeaderMatch& value) { m_headerMatchesHasBeenSet = true; m_headerMatches.push_back(value); return *this; }

    /**
     * <p>The header matches. Matches incoming requests with rule based on request
     * header value before applying rule action.</p>
     */
    inline HttpMatch& AddHeaderMatches(HeaderMatch&& value) { m_headerMatchesHasBeenSet = true; m_headerMatches.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP method type.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }

    /**
     * <p>The HTTP method type.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The HTTP method type.</p>
     */
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The HTTP method type.</p>
     */
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The HTTP method type.</p>
     */
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }

    /**
     * <p>The HTTP method type.</p>
     */
    inline HttpMatch& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}

    /**
     * <p>The HTTP method type.</p>
     */
    inline HttpMatch& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}

    /**
     * <p>The HTTP method type.</p>
     */
    inline HttpMatch& WithMethod(const char* value) { SetMethod(value); return *this;}


    /**
     * <p>The path match.</p>
     */
    inline const PathMatch& GetPathMatch() const{ return m_pathMatch; }

    /**
     * <p>The path match.</p>
     */
    inline bool PathMatchHasBeenSet() const { return m_pathMatchHasBeenSet; }

    /**
     * <p>The path match.</p>
     */
    inline void SetPathMatch(const PathMatch& value) { m_pathMatchHasBeenSet = true; m_pathMatch = value; }

    /**
     * <p>The path match.</p>
     */
    inline void SetPathMatch(PathMatch&& value) { m_pathMatchHasBeenSet = true; m_pathMatch = std::move(value); }

    /**
     * <p>The path match.</p>
     */
    inline HttpMatch& WithPathMatch(const PathMatch& value) { SetPathMatch(value); return *this;}

    /**
     * <p>The path match.</p>
     */
    inline HttpMatch& WithPathMatch(PathMatch&& value) { SetPathMatch(std::move(value)); return *this;}

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
